# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: head/math/octave-forge-oct2mat/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	octave-forge-oct2mat
PORTVERSION=	1.0.7
PORTREVISION=	22
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

RUN_DEPENDS+=	${TARBALLS_DIR}/io.tar.gz:math/octave-forge-io

.include "${.CURDIR}/../../Mk/bsd.octave.mk"
.include <bsd.port.mk>
