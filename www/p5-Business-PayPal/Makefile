# Created by: Steven Kreuzer
# $FreeBSD: head/www/p5-Business-PayPal/Makefile 432079 2017-01-21 21:06:21Z skreuzer $

PORTNAME=	Business-PayPal
PORTVERSION=	0.18
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Perl extension for automating PayPal transactions

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Net-SSLeay>=1.35:security/p5-Net-SSLeay \
		p5-CGI>=3.49:www/p5-CGI \
		p5-Digest-MD5>=2.52:security/p5-Digest-MD5
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
