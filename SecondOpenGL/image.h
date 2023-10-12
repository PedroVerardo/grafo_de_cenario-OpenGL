#include <iostream>
class Image;
using ImagePtr = std::shared_ptr<Image>;

class Image {
	int m_width;
	int m_height;
	int m_nchannels;
	unsigned char* m_data;

	protected :
		Image(const std::string& filename);
	public :
		static ImagePtr Make(const std::string& filename);
		virtual ~Image();
		int GetWidth() const;
		int GetHeight() const;
		int GetNChannels() const;
		const unsigned char* GetData() const;
		void ExtractSubimage(int x, int y, int w, int h, unsigned char* data);
};