/*
Copyright 2017 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS-IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SHADER_SHADERDEF_H_
#define FLATBUFFERS_GENERATED_SHADER_SHADERDEF_H_

#include "flatbuffers/flatbuffers.h"

#include "common_generated.h"

namespace shaderdef {

struct Shader;

struct Shader FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_VERTEX_SHADER = 4,
    VT_FRAGMENT_SHADER = 6,
    VT_ORIGINAL_SOURCES = 8
  };
  const flatbuffers::String *vertex_shader() const {
    return GetPointer<const flatbuffers::String *>(VT_VERTEX_SHADER);
  }
  const flatbuffers::String *fragment_shader() const {
    return GetPointer<const flatbuffers::String *>(VT_FRAGMENT_SHADER);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *original_sources() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_ORIGINAL_SOURCES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_VERTEX_SHADER) &&
           verifier.Verify(vertex_shader()) &&
           VerifyOffset(verifier, VT_FRAGMENT_SHADER) &&
           verifier.Verify(fragment_shader()) &&
           VerifyOffset(verifier, VT_ORIGINAL_SOURCES) &&
           verifier.Verify(original_sources()) &&
           verifier.VerifyVectorOfStrings(original_sources()) &&
           verifier.EndTable();
  }
};

struct ShaderBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_vertex_shader(flatbuffers::Offset<flatbuffers::String> vertex_shader) {
    fbb_.AddOffset(Shader::VT_VERTEX_SHADER, vertex_shader);
  }
  void add_fragment_shader(flatbuffers::Offset<flatbuffers::String> fragment_shader) {
    fbb_.AddOffset(Shader::VT_FRAGMENT_SHADER, fragment_shader);
  }
  void add_original_sources(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> original_sources) {
    fbb_.AddOffset(Shader::VT_ORIGINAL_SOURCES, original_sources);
  }
  explicit ShaderBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ShaderBuilder &operator=(const ShaderBuilder &);
  flatbuffers::Offset<Shader> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Shader>(end);
    return o;
  }
};

inline flatbuffers::Offset<Shader> CreateShader(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> vertex_shader = 0,
    flatbuffers::Offset<flatbuffers::String> fragment_shader = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> original_sources = 0) {
  ShaderBuilder builder_(_fbb);
  builder_.add_original_sources(original_sources);
  builder_.add_fragment_shader(fragment_shader);
  builder_.add_vertex_shader(vertex_shader);
  return builder_.Finish();
}

inline flatbuffers::Offset<Shader> CreateShaderDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *vertex_shader = nullptr,
    const char *fragment_shader = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *original_sources = nullptr) {
  return shaderdef::CreateShader(
      _fbb,
      vertex_shader ? _fbb.CreateString(vertex_shader) : 0,
      fragment_shader ? _fbb.CreateString(fragment_shader) : 0,
      original_sources ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*original_sources) : 0);
}

inline const shaderdef::Shader *GetShader(const void *buf) {
  return flatbuffers::GetRoot<shaderdef::Shader>(buf);
}

inline const char *ShaderIdentifier() {
  return "FSHD";
}

inline bool ShaderBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, ShaderIdentifier());
}

inline bool VerifyShaderBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<shaderdef::Shader>(ShaderIdentifier());
}

inline const char *ShaderExtension() {
  return "fplshader";
}

inline void FinishShaderBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<shaderdef::Shader> root) {
  fbb.Finish(root, ShaderIdentifier());
}

}  // namespace shaderdef

#endif  // FLATBUFFERS_GENERATED_SHADER_SHADERDEF_H_
