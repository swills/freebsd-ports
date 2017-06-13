# Created by: Alex Kapranoff <ka@nadoby.ru>
# $FreeBSD: head/devel/p5-Gearman-XS/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Gearman-XS
PORTVERSION=	0.12
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DSCHOEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	otaviof@gmail.com
COMMENT=	Perl front end for the Gearman C library

LIB_DEPENDS=	libgearman.so:devel/gearmand

CFLAGS+=	-I${LOCALBASE}/include

USES=		perl5
USE_PERL5=	configure

INSTALL_TARGET=	pure_install

.include <bsd.port.mk>
