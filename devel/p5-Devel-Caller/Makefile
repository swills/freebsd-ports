# Created by: Ying-Chieh Chen
# $FreeBSD: head/devel/p5-Devel-Caller/Makefile 466632 2018-04-06 09:03:33Z amdmi3 $

PORTNAME=	Devel-Caller
PORTVERSION=	2.06
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module which is meatier versions of caller

BUILD_DEPENDS=	p5-PadWalker>=0.08:devel/p5-PadWalker
RUN_DEPENDS:=	${BUILD_DEPENDS}

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
