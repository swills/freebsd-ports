# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/science/p5-Chemistry-Mol/Makefile 473377 2018-06-26 09:07:15Z amdmi3 $

PORTNAME=	Chemistry-Mol
PORTVERSION=	0.37
PORTREVISION=	1
CATEGORIES=	science perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl toolkit to describe molecules

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Math-VectorReal>=1.02:math/p5-Math-VectorReal
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
