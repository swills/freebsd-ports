# $FreeBSD: head/x11/slop/Makefile 468401 2018-04-27 07:03:56Z riggs $

PORTNAME=	slop
PORTVERSION=	7.4
DISTVERSIONPREFIX=	v
CATEGORIES=	x11

MAINTAINER=	neel@neelc.org
COMMENT=	Make a screen selection and print the selection coordinates to stdout

LICENSE=	GPLv3

BUILD_DEPENDS=	${LOCALBASE}/include/glm/glm.hpp:math/glm
LIB_DEPENDS=	libicuuc.so:devel/icu

USES=		cmake
USE_GL=		gl glu glew
USE_LDCONFIG=	yes
USE_XORG=	ice sm x11 xext xrender

USE_GITHUB=	yes
GH_ACCOUNT=	naelstrof

PLIST_FILES=	bin/slop \
		include/slop.hpp \
		lib/libslopy.so \
		lib/libslopy.so.7.4 \
		man/man1/slop.1.gz

.include <bsd.port.mk>
