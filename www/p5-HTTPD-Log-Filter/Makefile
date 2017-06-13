# $FreeBSD: head/www/p5-HTTPD-Log-Filter/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	HTTPD-Log-Filter
PORTVERSION=	1.08
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:AWRIGLEY
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl module to filter entries out of an httpd log

BUILD_DEPENDS=	p5-IO-Zlib>=0:archivers/p5-IO-Zlib
RUN_DEPENDS=	p5-IO-Zlib>=0:archivers/p5-IO-Zlib

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
