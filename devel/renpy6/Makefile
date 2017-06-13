# $FreeBSD: head/devel/renpy6/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTVERSION=	6.18.3
PORTREVISION=	3
PKGNAMESUFFIX=	6

CONFLICTS_INSTALL=	${PORTNAME}-[0-9]*

MASTERDIR=	${.CURDIR}/../renpy
PATCHDIR=	${.CURDIR}/files
DISTINFO_FILE=	${.CURDIR}/distinfo

PORTSCOUT=	limit:^6\.18\.*

BUILD_DEPENDS=	${PYGAME}
RUN_DEPENDS=	${PYGAME}

USE_SDL=	sdl

post-patch:
	@${REINPLACE_CMD} -e 's,/usr/bin/python,${PYTHON_CMD},' \
		${WRKSRC}/launcher/game/project.rpy

.include "${MASTERDIR}/Makefile"
