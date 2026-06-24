#!/bin/bash

# Download all iplanter journal videos
# This script downloads all 33 video files from the journal entries

mkdir -p iplanter_videos
cd iplanter_videos

echo "Starting download of all iplanter journal videos..."
echo "This may take a while depending on your internet connection."
echo ""

# Array of all video URLs from the journal
videos=(
  "https://lookout.hackclub.com/api/media/39c8e9b1-5498-4592-938e-7a8112fe8d25/video.mp4"
  "https://lookout.hackclub.com/api/media/a0194fdb-2934-48bc-9faa-4f39b76ea9d6/video.mp4"
  "https://lookout.hackclub.com/api/media/017bf1f2-2a90-4ec8-a157-3f55615da24c/video.mp4"
  "https://lookout.hackclub.com/api/media/73044bc6-2b32-4cab-95aa-356b489d5356/video.mp4"
  "https://lookout.hackclub.com/api/media/ab37e3ce-869a-41e6-bcbc-273c83643db6/video.mp4"
  "https://lookout.hackclub.com/api/media/a42e9739-10e7-48d4-97ff-4ad5316751c7/video.mp4"
  "https://lookout.hackclub.com/api/media/274ed63b-8791-4bec-a9bc-25bfed9e1fe9/video.mp4"
  "https://lookout.hackclub.com/api/media/8740155c-8126-4273-8aa6-d9e91134e4eb/video.mp4"
  "https://lookout.hackclub.com/api/media/71029e5e-effa-463b-9a8b-f3017571bad6/video.mp4"
  "https://lookout.hackclub.com/api/media/17dc161d-d8e9-436a-915d-6026b2336c81/video.mp4"
  "https://lookout.hackclub.com/api/media/d695003b-a4f2-40d3-bc00-90b1c24fa4c6/video.mp4"
  "https://lookout.hackclub.com/api/media/e8717182-92d7-46c3-8b2d-ea1cfd6adc78/video.mp4"
  "https://lookout.hackclub.com/api/media/0d29021f-e4d3-4daf-aa5a-1558b102a603/video.mp4"
  "https://lookout.hackclub.com/api/media/4732f08f-7ea3-4eb7-bfe2-8156e80a7cf4/video.mp4"
  "https://lookout.hackclub.com/api/media/a2de388d-6fdd-4200-bf0a-34a21ca7cad1/video.mp4"
  "https://lookout.hackclub.com/api/media/0c9ae70b-0913-4697-a8e3-47e122c2646b/video.mp4"
  "https://lookout.hackclub.com/api/media/688f1e1e-0017-4471-87a2-eae8f582db90/video.mp4"
  "https://lookout.hackclub.com/api/media/5d1a74c5-d32e-4197-8963-99e6f8847f28/video.mp4"
  "https://lookout.hackclub.com/api/media/03b7322f-26b9-42cc-8047-c56269759760/video.mp4"
  "https://lookout.hackclub.com/api/media/b52d8ea6-4c21-4fc5-9a3d-2a394aab2168/video.mp4"
  "https://lookout.hackclub.com/api/media/80d7eabc-8b86-4ef7-b661-f2eea82c9321/video.mp4"
  "https://lookout.hackclub.com/api/media/01673cf9-93a3-456b-bc8c-024d6964afca/video.mp4"
  "https://lookout.hackclub.com/api/media/86f3cf26-08f5-4a27-b349-2f745497568b/video.mp4"
  "https://lookout.hackclub.com/api/media/200e538f-32c4-468b-a43e-9686d0a14264/video.mp4"
  "https://lookout.hackclub.com/api/media/0c49f766-ea7c-4edd-8c59-523e63b382ec/video.mp4"
  "https://lookout.hackclub.com/api/media/815ca600-27fb-43a9-90ad-d8b02d48aac5/video.mp4"
  "https://lookout.hackclub.com/api/media/32767433-f410-4cd4-a7dd-5e8493e4f3a6/video.mp4"
  "https://lookout.hackclub.com/api/media/6521b74d-b1e7-4148-a941-ddb9a29554ac/video.mp4"
  "https://lookout.hackclub.com/api/media/7e7aac77-6517-4b5f-8983-70b98b5147fb/video.mp4"
  "https://lookout.hackclub.com/api/media/e57b4522-ed95-43bb-bf74-7ba9bb4ac293/video.mp4"
  "https://lookout.hackclub.com/api/media/58336c67-600d-42a3-9d92-4480a5b43881/video.mp4"
  "https://lookout.hackclub.com/api/media/2ebc86fb-2988-40f1-8d9e-0c735e4f75d8/video.mp4"
  "https://lookout.hackclub.com/api/media/d375ea5b-6b0c-4839-9f35-30c2da5703dc/video.mp4"
)

# Download each video
total=${#videos[@]}
for i in "${!videos[@]}"; do
  index=$((i + 1))
  url="${videos[$i]}"
  filename="video_$(printf "%02d" $index).mp4"
  
  echo "[$index/$total] Downloading $filename..."
  
  if wget -q -O "$filename" "$url"; then
    echo "✓ Successfully downloaded $filename"
  else
    echo "✗ Failed to download $filename from:"
    echo "  $url"
  fi
done

echo ""
echo "Download complete!"
echo "All videos are saved in the 'iplanter_videos' directory."
echo "Total videos downloaded: $total"
