# $FreeBSD: head/misc/morse/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	morse
DISTVERSION=	1.4-154
DISTVERSIONSUFFIX=	-g53f9eaa8
CATEGORIES=	misc
PKGNAMESUFFIX=	-robotics

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Modular OpenRobots Simulation Engine

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake pkgconfig python:3.4+ shebangfix
USE_GITHUB=	yes
GH_ACCOUNT=	${PORTNAME}-simulator
SHEBANG_FILES=	bin/morse_inspector

CMAKE_ARGS=	-DPYTHON_EXECUTABLE:STRING=${PYTHON_CMD}

OPTIONS_DEFINE=	EXAMPLES

PORTEXAMPLES=	*

.include <bsd.port.mk>
