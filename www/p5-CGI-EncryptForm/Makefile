# Created by: Steve Wills <steve@mouf.net>
# $FreeBSD: head/www/p5-CGI-EncryptForm/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	CGI-EncryptForm
PORTVERSION=	1.02
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MARAL
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Implement trusted stateful CGI Form Data using cryptography

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Crypt-HCE_SHA>=0:security/p5-Crypt-HCE_SHA \
		p5-Digest-SHA1>=0:security/p5-Digest-SHA1

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
