# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-Test-SubCalls/Makefile 457234 2017-12-25 13:54:04Z sunpoet $

PORTNAME=	Test-SubCalls
PORTVERSION=	1.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Track the number of times subs are called

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Hook-LexWrap>=0.20:devel/p5-Hook-LexWrap
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
