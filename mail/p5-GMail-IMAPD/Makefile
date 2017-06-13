# Created by: Ali Mashtizadeh <ali@mashtizadeh.org>
# $FreeBSD: head/mail/p5-GMail-IMAPD/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	GMail-IMAPD
PORTVERSION=	0.94
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	mashtizadeh@gmail.com
COMMENT=	Perl IMAP4 gateway to Google's webmail service

BUILD_DEPENDS=	p5-Mail-Webmail-Gmail>=0:mail/p5-Mail-Webmail-Gmail
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
