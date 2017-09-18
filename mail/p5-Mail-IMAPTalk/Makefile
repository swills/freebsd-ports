# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/mail/p5-Mail-IMAPTalk/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Mail-IMAPTalk
PORTVERSION=	4.04
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	IMAP client interface with lots of features

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Authen-SASL>=0:security/p5-Authen-SASL \
		p5-Encode-IMAPUTF7>=0:converters/p5-Encode-IMAPUTF7
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
