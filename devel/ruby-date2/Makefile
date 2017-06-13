# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: head/devel/ruby-date2/Makefile 406285 2016-01-17 07:06:25Z swills $

PORTNAME=	date2
PORTVERSION=	4.0.19
CATEGORIES=	devel ruby
MASTER_SITES=	http://www.funaba.org/archive/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Alternative date class for Ruby

BROKEN_RUBY22=	yes
BROKEN_RUBY23=	yes

OPTIONS_DEFINE=	DOCS EXAMPLES

NO_ARCH=	yes
USE_RUBY=	yes
USE_RUBY_SETUP=	yes
RUBY_SETUP=	install.rb

DOCS_EN=	MANUAL.en MANUAL.en.rd MANUAL.en.html README.en
DOCS_JA=	MANUAL MANUAL.rd MANUAL.html README
EXAMPLES_EN=	cal.rb daylight.rb goodfriday.rb
EXAMPLES_JA=	ncal.rb

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${RUBY_MODDOCDIR}/ja
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${DOCS_EN} ${STAGEDIR}${RUBY_MODDOCDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${DOCS_JA} ${STAGEDIR}${RUBY_MODDOCDIR}/ja/

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${RUBY_MODEXAMPLESDIR}/ja/
	cd ${WRKSRC}/sample/ && ${INSTALL_DATA} ${EXAMPLES_EN} ${STAGEDIR}${RUBY_MODEXAMPLESDIR}/
	cd ${WRKSRC}/sample/ && ${INSTALL_DATA} ${EXAMPLES_JA} ${STAGEDIR}${RUBY_MODEXAMPLESDIR}/ja/

.include <bsd.port.mk>
