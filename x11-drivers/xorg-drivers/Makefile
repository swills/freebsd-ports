# $FreeBSD$

PORTNAME=	xorg-drivers
PORTVERSION=	7.7
PORTREVISION=	6
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.org drivers meta-port

VIDEODIR=	${LOCALBASE}/lib/xorg/modules/drivers
INPUTDIR=	${LOCALBASE}/lib/xorg/modules/input

USES=		metaport

INPUT_DRIVERS=		egalax \
			elographics \
			evdev \
			joystick \
			keyboard \
			libinput \
			mouse \
			synaptics \
			void \
			wacom

VIDEO_DRIVERS=		apm \
			ark \
			ast \
			chips \
			cirrus \
			dummy \
			glint \
			i128 \
			i740 \
			mach64 \
			mga \
			neomagic \
			nv \
			openchrome \
			r128 \
			rendition \
			s3 \
			s3virge \
			savage \
			scfb \
			siliconmotion \
			sis \
			tdfx \
			trident \
			tseng \
			vesa \
			voodoo

OPTIONS_DEFAULT=	KEYBOARD \
			LIBINPUT \
			MOUSE \
			SCFB

OPTIONS_DEFAULT_amd64=	VESA
OPTIONS_DEFAULT_i386:=	${OPTIONS_DEFAULT_amd64}
OPTIONS_DEFAULT_sparc64=SUNFFB

# these drivers have a different module name compared to the plugin they install
QUIRKS=		keyboard:kbd

.include <bsd.port.options.mk>

# Manual add arch specific drivers so they be added to depend lines.
.if ${ARCH}==i386 || ${ARCH}==amd64
INPUT_DRIVERS+= vmmouse
VIDEO_DRIVERS+=	amdgpu ati intel vmware
.endif

.if ${ARCH}==i386
VIDEO_DRIVERS+= geode
.endif

.if ${ARCH}==sparc64
VIDEO_DRIVERS+=	sunffb
.endif


.for type in input video
OPTIONS_GROUP+=		${type:tu}
. for i in ${${type:tu}_DRIVERS:O}
OPTIONS_GROUP_${type:tu}+=	${i:tu}
${i:tu}_DESC!=		${MAKE} -C ../xf86-${type}-${i} -V COMMENT
.  if ${PORT_OPTIONS:M${i:tu}} != ""
.   if ${QUIRKS:M${i}\:*:C/.*://} != ""
RUN_DEPENDS+=	${${type:tu}DIR}/${QUIRKS:M${i}\:*:C/.*://}_drv.so:x11-drivers/xf86-${type}-${i}
.   else
RUN_DEPENDS+=	${${type:tu}DIR}/${i}_drv.so:x11-drivers/xf86-${type}-${i}
.   endif
.  endif
. endfor
.endfor

.include <bsd.port.mk>
