# $FreeBSD: head/devel/p5-Test-POE-Client-TCP/Makefile 480143 2018-09-20 00:23:28Z sunpoet $

PORTNAME=	Test-POE-Client-TCP
PORTVERSION=	1.24
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE Component providing TCP client services for test cases

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE>=1.28:devel/p5-POE

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
