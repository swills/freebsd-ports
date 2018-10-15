# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/security/p5-Authen-SASL-Cyrus/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Authen-SASL-Cyrus
PORTVERSION=	0.13
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XS SASL Authentication

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Authen-SASL>=0:security/p5-Authen-SASL
LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	INC="-I${LOCALBASE}/include"

.include <bsd.port.mk>
