#pragma once
#include <expected>
#include <filesystem>


class RanokProcessor {
public:
	static std::expected<RanokProcessor, std::string> FromFile(const std::filesystem::path& path);
	static std::expected<RanokProcessor, std::string> FromText(const std::string& path);

};
