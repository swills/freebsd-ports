# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/math/p5-CAD-Calc/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	CAD-Calc
PORTVERSION=	0.27
PORTREVISION=	2
CATEGORIES=	math graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Generic cad-related geometry calculations

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Math-Geometry-Planar-Offset>=0:math/p5-Math-Geometry-Planar-Offset \
		p5-Math-Round-Var>=0:math/p5-Math-Round-Var \
		p5-Math-Vec>=0:math/p5-Math-Vec
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
