# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/p5-Pango/Makefile 412923 2016-04-10 11:58:49Z swills $

PORTNAME=	Pango
PORTVERSION=	1.227
CATEGORIES=	x11-toolkits lang perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:XAOC
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Perl module for layout and render i18n text

LICENSE=	LGPL21

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0.300:devel/p5-ExtUtils-Depends \
		p5-ExtUtils-PkgConfig>=1.03:devel/p5-ExtUtils-PkgConfig \
		p5-Cairo>=1:graphics/p5-Cairo \
		p5-Glib2>=1.220:devel/p5-Glib2
RUN_DEPENDS=	p5-Glib2>=1.220:devel/p5-Glib2

USE_GNOME=	pango
USES=		perl5
USE_PERL5=	configure
MAKE_JOBS_UNSAFE=	yes

.include <bsd.port.mk>
