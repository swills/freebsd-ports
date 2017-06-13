# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/devel/p5-Devel-ArgNames/Makefile 442341 2017-06-01 23:51:02Z sunpoet $

PORTNAME=	Devel-ArgNames
PORTVERSION=	0.03
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Figure out the names of variables passed into subroutines

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-PadWalker>=0:devel/p5-PadWalker
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
