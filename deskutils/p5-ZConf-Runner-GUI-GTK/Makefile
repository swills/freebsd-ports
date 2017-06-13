# Created by: Zane C, Bowers <vvelox@vvelox.net>
# $FreeBSD: head/deskutils/p5-ZConf-Runner-GUI-GTK/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	ZConf-Runner-GUI-GTK
PORTVERSION=	0.0.2
PORTREVISION=	3
CATEGORIES=	deskutils perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VVELOX
PKGNAMEPREFIX=	p5-

MAINTAINER=	vvelox@vvelox.net
COMMENT=	The GTK GUI backend for ZConf::Runner

BUILD_DEPENDS=	p5-ZConf>=0:net/p5-ZConf \
		p5-Gtk2>=1.060:x11-toolkits/p5-Gtk2 \
		p5-ZConf-Runner>=0:deskutils/p5-ZConf-Runner \
		p5-File-MimeInfo>=0:devel/p5-File-MimeInfo
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
