# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/www/p5-CGI-Compress-Gzip/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	CGI-Compress-Gzip
PORTVERSION=	1.03
PORTREVISION=	3
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	CGI::Compress::Gzip - CGI with automatically compressed output

BUILD_DEPENDS=	p5-IO-Zlib>=1.01:archivers/p5-IO-Zlib
RUN_DEPENDS=	p5-IO-Zlib>=1.01:archivers/p5-IO-Zlib

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
