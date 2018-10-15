# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/biology/p5-Bio-NEXUS/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Bio-NEXUS
PORTVERSION=	0.78
PORTREVISION=	1
CATEGORIES=	biology perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Object-oriented Perl API for the NEXUS file format

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Clone-PP>=1.02:devel/p5-Clone-PP

TEST_DEPENDS=	p5-Test-Deep>=0.106:devel/p5-Test-Deep \
		p5-Test-Pod>=0:devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:devel/p5-Test-Pod-Coverage

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
