# Created by: chinsan
# $FreeBSD: head/x11-toolkits/p5-Gtk2-Ex-FormFactory/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	Gtk2-Ex-FormFactory
PORTVERSION=	0.67
PORTREVISION=	2
CATEGORIES=	x11-toolkits perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Makes building complex GUI more easy

BUILD_DEPENDS=	p5-Glib2>=1.00:devel/p5-Glib2 \
		p5-Gtk2>=1.060:x11-toolkits/p5-Gtk2 \
		p5-Gtk2-Ex-Simple-List>=0:x11-toolkits/p5-Gtk2-Ex-Simple-List
RUN_DEPENDS=	p5-Glib2>=1.00:devel/p5-Glib2 \
		p5-Gtk2>=1.060:x11-toolkits/p5-Gtk2 \
		p5-Gtk2-Ex-Simple-List>=0:x11-toolkits/p5-Gtk2-Ex-Simple-List

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
