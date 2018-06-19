# Created by: Lars Thegler <lars@thegler.dk>
# $FreeBSD: head/mail/p5-Email-Simple/Makefile 472654 2018-06-17 23:24:45Z wen $

PORTNAME=	Email-Simple
PORTVERSION=	2.216
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple parsing of RFC2822 message format and headers

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Email-Date-Format>=0:mail/p5-Email-Date-Format
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
