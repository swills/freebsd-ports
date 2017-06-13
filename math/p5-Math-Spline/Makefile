# Created by: Fernan Aguero <fernan@iib.unsam.edu.ar>
# $FreeBSD: head/math/p5-Math-Spline/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Math-Spline
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Cubic Spline Interpolation of data

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Math-Derivative>=0:math/p5-Math-Derivative
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
