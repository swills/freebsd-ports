# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-nokogumbo/Makefile 442872 2017-06-07 19:11:27Z sunpoet $

PORTNAME=	nokogumbo
PORTVERSION=	1.4.13
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Nokogiri interface to the Gumbo HTML5 parser

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-nokogiri>=0:textproc/rubygem-nokogiri

USE_GNOME=	libxml2
USE_RUBY=	yes
USES=		gem gnome pkgconfig

.include <bsd.port.mk>
