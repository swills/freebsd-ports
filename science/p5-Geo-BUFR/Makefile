# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/science/p5-Geo-BUFR/Makefile 427593 2016-12-03 07:59:16Z sunpoet $

PORTNAME=	Geo-BUFR
PORTVERSION=	1.36
CATEGORIES=	science perl5 geography
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PSANNES
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for handling of WMO BUFR files

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENCE

USES=		perl5 shebangfix
SHEBANG_FILES=	*.pl
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Geo/BUFR/BUFR.so

.include <bsd.port.mk>
