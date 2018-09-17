# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/p5-Test-ManyParams/Makefile 479736 2018-09-13 21:55:45Z sunpoet $

PORTNAME=	Test-ManyParams
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to test many params as one test

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Set-CrossProduct>0:devel/p5-Set-CrossProduct \
		p5-Test-Differences>0:devel/p5-Test-Differences \
		p5-Test-Exception>0:devel/p5-Test-Exception
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
