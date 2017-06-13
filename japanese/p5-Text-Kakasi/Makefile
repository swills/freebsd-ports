# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: head/japanese/p5-Text-Kakasi/Makefile 412347 2016-04-01 14:08:37Z mat $

PORTNAME=	Text-Kakasi
PORTVERSION=	2.04
PORTREVISION=	3
CATEGORIES=	japanese textproc perl5
MASTER_SITES=	CPAN

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Kakasi library module for Perl5

LIB_DEPENDS=	libkakasi.so:japanese/kakasi

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.pre.mk>

PKGNAMEPREFIX:=	${PKGNAMEPREFIX}p5-

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' ${WRKSRC}/Makefile.PL

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Text/Kakasi/Kakasi.so

.include <bsd.port.post.mk>
