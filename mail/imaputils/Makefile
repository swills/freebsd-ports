# Created by: Mikhail T. (m.tsatsenko@gmail.com)
# $FreeBSD: head/mail/imaputils/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	imaputils
PORTVERSION=	1.0.4
CATEGORIES=	mail

MAINTAINER=	m.tsatsenko@gmail.com
COMMENT=	Number of tools and scripts for use with IMAP servers

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	mtsatsenko

USES=		perl5 shebangfix
USE_PERL5=	configure
NO_BUILD=	yes
SHEBANG_FILES=	bin/*

OPTIONS_DEFINE=	SSL UNICODE

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MSSL}
RUN_DEPENDS+=	p5-IO-Socket-SSL>=0:security/p5-IO-Socket-SSL
.endif

.if ${PORT_OPTIONS:MUNICODE}
RUN_DEPENDS+=	p5-Unicode-IMAPUtf7>=0:converters/p5-Unicode-IMAPUtf7
.endif

.include <bsd.port.mk>
