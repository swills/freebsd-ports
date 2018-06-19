# $FreeBSD: head/devel/p5-Test-POE-Client-TCP/Makefile 471165 2018-05-30 19:48:33Z sunpoet $

PORTNAME=	Test-POE-Client-TCP
PORTVERSION=	1.14
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE Component providing TCP client services for test cases

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-POE>=1.28:devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
