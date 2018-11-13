# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: head/devel/p5-Locale-libintl/Makefile 484711 2018-11-11 18:18:33Z sunpoet $

PORTNAME=	Locale-libintl
PORTVERSION=	1.30
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	libintl-perl-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Internationalization library for Perl

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gettext iconv:translit perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Locale/gettext_xs/gettext_xs.so

.include <bsd.port.mk>
