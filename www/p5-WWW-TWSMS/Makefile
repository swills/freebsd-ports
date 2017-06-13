# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: head/www/p5-WWW-TWSMS/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	WWW-TWSMS
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Perl interface for sending sms by TWSMS

BUILD_DEPENDS=	p5-libwww>=0:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
