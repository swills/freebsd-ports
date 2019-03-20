# $FreeBSD: head/multimedia/libva-glx/Makefile 495795 2019-03-15 15:55:13Z jbeich $

PKGNAMESUFFIX=	-glx

COMMENT=	VAAPI wrapper for GLX

MASTERDIR=	${.CURDIR}/../libva

OPTIONS_SLAVE=	GLX ${GLX_IMPLIES}
OPTIONS_EXCLUDE=WAYLAND

post-install:	slave-post-install
slave-post-install:
	@${REINPLACE_CMD} '/glx/!s/^/@comment /' ${TMPPLIST}

.include "${MASTERDIR}/Makefile"
