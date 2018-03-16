# Created by: Simun Mikecin <numisemis@yahoo.com>
# $FreeBSD: head/net/p5-Apache2-SOAP/Makefile 464193 2018-03-11 18:36:16Z brnrd $

PORTNAME=	Apache2-SOAP
PORTVERSION=	0.73
PORTREVISION=	4
CATEGORIES=	net www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	numisemis@yahoo.com
COMMENT=	Apache2 mod_perl2 SOAP Server

BUILD_DEPENDS=	${APACHE_PKGNAMEPREFIX}mod_perl2>=0:www/mod_perl2 \
		p5-SOAP-Lite>=0:net/p5-SOAP-Lite
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		apache:2.2+ perl5
USE_PERL5=	configure

.include <bsd.port.mk>
