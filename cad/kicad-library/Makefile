# Created by: Thierry Thomas <thierry@FreeBSD.org>
# $FreeBSD: head/cad/kicad-library/Makefile 446084 2017-07-17 17:43:23Z thierry $

PORTNAME=	kicad
PORTVERSION=	4.0.6
CATEGORIES=	cad
PKGNAMESUFFIX=	-library

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Schematic and 3D libraries supported by KiCad team

LICENSE=	GPLv2

RUN_DEPENDS=	kicad:cad/kicad

CONFLICTS=	kicad-devel-r201*

USE_GITHUB=	yes
GH_ACCOUNT=	KiCad
GH_PROJECT=	kicad-library

USES=		cmake

NO_ARCH=	yes

.include <bsd.port.mk>
