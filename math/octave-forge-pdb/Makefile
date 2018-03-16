# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>
# $FreeBSD: head/math/octave-forge-pdb/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	octave-forge-pdb
PORTVERSION=	1.0.7
PORTREVISION=	16
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

post-patch:
	${REINPLACE_CMD} -E 's/Octave_map/octave_map/g' ${WRKSRC}/src/*.cc

.include "${.CURDIR}/../../Mk/bsd.octave.mk"
.include <bsd.port.mk>
