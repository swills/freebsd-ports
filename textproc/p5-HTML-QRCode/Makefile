# Created by: chinsan
# $FreeBSD: head/textproc/p5-HTML-QRCode/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	HTML-QRCode
PORTVERSION=	0.01
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate HTML based QR Code

BUILD_DEPENDS=	p5-Text-QRCode>0:textproc/p5-Text-QRCode
RUN_DEPENDS:=	${BUILD_DEPENDS}
LIB_DEPENDS=	libqrencode.so:graphics/libqrencode

USES=		perl5
USE_PERL5=	configure
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
