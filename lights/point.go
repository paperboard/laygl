package lights

import "github.com/go-gl/mathgl/mgl32"

// TODO: Get rid of mgl32 at top-level.
type Point struct {
	Position   mgl32.Vec3
	Irradiance mgl32.Vec3

	ConstantAttenuation  float32
	LinearAttenuation    float32
	QuadraticAttenuation float32
}

func NewPoint() Point{
	return Point{}
}

func (p *Point) isLight() {}