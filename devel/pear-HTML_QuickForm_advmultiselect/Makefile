# Created by: Chris St Denis <chris@ctgameinfo.com>
# $FreeBSD: head/devel/pear-HTML_QuickForm_advmultiselect/Makefile 475299 2018-07-25 05:11:46Z joneum $

PORTNAME=	HTML_QuickForm_advmultiselect
PORTVERSION=	1.5.1
CATEGORIES=	devel www pear

MAINTAINER=	chris@ctgameinfo.com
COMMENT=	Element for PEAR::HTML_QuickForm that defines a 2 box multi-select

BUILD_DEPENDS=	${PEARDIR}/HTML/QuickForm.php:devel/pear-HTML_QuickForm@${PHP_FLAVOR} \
		${PEARDIR}/HTML/Common.php:devel/pear-HTML_Common@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/HTML/QuickForm.php:devel/pear-HTML_QuickForm@${PHP_FLAVOR} \
		${PEARDIR}/HTML/Common.php:devel/pear-HTML_Common@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
