# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/devel/clinfo/Makefile 430235 2017-01-01 03:45:12Z sunpoet $

PORTNAME=	clinfo
PORTVERSION=	2.1.16.01.12
CATEGORIES=	devel

MAINTAINER=	x11@FreeBSD.org
COMMENT=	OpenCL info program like glxinfo is for libGL

BUILD_DEPENDS=	${LOCALBASE}/include/CL/opencl.h:devel/opencl
LIB_DEPENDS=	libOpenCL.so:devel/ocl-icd

USE_GITHUB=	yes
GH_ACCOUNT=	Oblomov

USES=		gmake
NO_CONFIGURE=	yes
ALL_TARGET=	#
PLIST_FILES=	bin/clinfo \
		man/man1/clinfo.1.gz

post-patch:
	@${REINPLACE_CMD} -e 's|-Wall|-Wall -I${LOCALBASE}/include|g; \
		s|-lOpenCL|-lOpenCL -L${LOCALBASE}/lib|g' \
		${WRKSRC}/Makefile

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/clinfo ${STAGEDIR}${PREFIX}/bin/
	@${INSTALL_MAN}	${WRKSRC}/man/clinfo.1 ${STAGEDIR}${PREFIX}/man/man1/

.include <bsd.port.mk>
