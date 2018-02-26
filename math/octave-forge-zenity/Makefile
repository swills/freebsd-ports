# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: head/math/octave-forge-zenity/Makefile 462867 2018-02-24 22:03:00Z stephen $

PORTNAME=	octave-forge-zenity
PORTVERSION=	0.5.7
PORTREVISION=	16
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

RUN_DEPENDS+=	zenity:x11/zenity

.include "${.CURDIR}/../../Mk/bsd.octave.mk"
.include <bsd.port.mk>
