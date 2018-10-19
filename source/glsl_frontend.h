#pragma once

struct gl_shader_program;
typedef struct gl_shader_program* glsl_program;

enum pipeline_stage
{
	pipeline_stage_vertex,
	pipeline_stage_tess_ctrl,
	pipeline_stage_tess_eval,
	pipeline_stage_geometry,
	pipeline_stage_fragment,
	pipeline_stage_compute,
};

void glsl_frontend_init();
void glsl_frontend_exit();

glsl_program glsl_program_create(const char* source, pipeline_stage stage);
void glsl_program_free(glsl_program prg);
