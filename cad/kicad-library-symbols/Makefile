# Created by: Thierry Thomas <thierry@FreeBSD.org>
# $FreeBSD: head/cad/kicad-library-symbols/Makefile 481747 2018-10-10 18:31:16Z thierry $

PORTNAME=	kicad
PORTVERSION=	5.0.1
CATEGORIES=	cad
PKGNAMESUFFIX=	-library-symbols

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Official KiCad schematic symbol libraries

LICENSE=	GPLv2

RUN_DEPENDS=	kicad:cad/kicad

CONFLICTS=	kicad-devel-r2*

USE_GITHUB=	yes
GH_ACCOUNT=	KiCad
GH_PROJECT=	kicad-symbols

USES=		cmake

CMAKE_ARGS=	-DLOCALBASE="${LOCALBASE}" \
		-DCMAKE_BUILD_TYPE="Release" \
		-DKICAD_TESTING_VERSION=ON \
		-DKICAD_BUILD_VERSION=${DISTVERSION}
INSTALL_TARGET=	install

NO_ARCH=	yes

.include <bsd.port.mk>
