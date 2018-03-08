# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: head/devel/pear-HTML_Select_Common/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	HTML_Select_Common
PORTVERSION=	1.2.0
CATEGORIES=	devel www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Some small PEAR classes to handle common <select> lists

BUILD_DEPENDS=	${PEARDIR}/HTML/Common.php:devel/pear-HTML_Common@${PHP_FLAVOR}	\
		${PEARDIR}/I18N/Common.php:devel/pear-I18N@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/HTML/Common.php:devel/pear-HTML_Common@${PHP_FLAVOR}	\
		${PEARDIR}/I18N/Common.php:devel/pear-I18N@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
