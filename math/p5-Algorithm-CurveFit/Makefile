# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/math/p5-Algorithm-CurveFit/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Algorithm-CurveFit
PORTVERSION=	1.05
PORTREVISION=	2
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Nonlinear Least Squares Fitting

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Math-MatrixReal>=0:math/p5-Math-MatrixReal \
		p5-Math-Symbolic>=0:math/p5-Math-Symbolic
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
