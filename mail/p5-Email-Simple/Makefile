# Created by: Lars Thegler <lars@thegler.dk>
# $FreeBSD: head/mail/p5-Email-Simple/Makefile 449482 2017-09-09 09:21:49Z sunpoet $

PORTNAME=	Email-Simple
PORTVERSION=	2.214
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple parsing of RFC2822 message format and headers

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Email-Date-Format>=0:mail/p5-Email-Date-Format
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
