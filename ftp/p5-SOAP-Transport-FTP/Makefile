# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/ftp/p5-SOAP-Transport-FTP/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	SOAP-Transport-FTP
PORTVERSION=	0.711
PORTREVISION=	1
CATEGORIES=	ftp net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	FTP Client support for SOAP::Lite

LICENSE=	ART10

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-SOAP-Lite>=0.711:net/p5-SOAP-Lite

NO_ARCH=	yes
USE_PERL5=	modbuild
USES=		perl5

.include <bsd.port.mk>
